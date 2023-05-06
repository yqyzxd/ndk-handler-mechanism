package com.wind.ndk.handler

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

import com.wind.ndk.handler.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val handler=NativeHandler()
        binding.btnSend.setOnClickListener {
            handler.sendMessage(1,1,1,null)
        }

        binding.btnQuit.setOnClickListener {
            handler.quit()
        }
    }


}