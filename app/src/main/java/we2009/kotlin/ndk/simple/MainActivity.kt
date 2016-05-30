package we2009.kotlin.ndk.simple

import android.support.v7.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView

class MainActivity : AppCompatActivity() {

    init {
        System.loadLibrary("hellojni")
    }

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        (findViewById(R.id.hint)!! as TextView).text = helloKotlinJni()
    }

    external fun helloKotlinJni(): String

    fun jniCallKotlin(): String {
        return "kotlin call jni && jni Call Kotlin"
    }
}