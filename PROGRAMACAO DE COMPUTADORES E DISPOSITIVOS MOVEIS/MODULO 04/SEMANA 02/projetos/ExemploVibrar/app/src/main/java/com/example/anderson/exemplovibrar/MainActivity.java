package com.example.anderson.exemplovibrar;

import android.content.Context;
import android.os.Vibrator;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    Button btnVibrar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btnVibrar = (Button) findViewById(R.id.btnVibrar);
        btnVibrar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                vibrar();
            }
        });
    }

    private void vibrar(){
        Vibrator rr = (Vibrator) getSystemService(Context.VIBRATOR_SERVICE);
        long duracao = 100;
        rr.vibrate(duracao);
    }

}
