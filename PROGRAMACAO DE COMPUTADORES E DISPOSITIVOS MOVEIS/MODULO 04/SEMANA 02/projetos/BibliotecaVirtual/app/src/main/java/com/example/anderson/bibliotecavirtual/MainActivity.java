package com.example.anderson.bibliotecavirtual;

import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;

public class MainActivity extends AppCompatActivity {

    Button btnComprar;
    CheckBox cbCsharpe;
    CheckBox cbPython;
    CheckBox cbJava;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        btnComprar = (Button) findViewById(R.id.btnComprar);
        cbCsharpe = (CheckBox) findViewById(R.id.cbCsharpe);
        cbPython = (CheckBox) findViewById(R.id.cbpython);
        cbJava = (CheckBox) findViewById(R.id.cbJava);

        btnComprar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String msg = "";
                if(!cbCsharpe.isChecked() && !cbPython.isChecked() && !cbJava.isChecked()){
                    msg = "Você não selecionou nenhum livro para comprar";
                    exibirMensagem(msg);
                }else{
                    msg = "Você comprou os seguintes livros: \n\n";
                    if(cbCsharpe.isChecked()){
                        msg += " CSharpe\n";
                    }
                    if(cbPython.isChecked()){
                        msg += " Python\n";
                    }
                    if(cbJava.isChecked()){
                        msg += " Java\n";
                    }
                    exibirMensagem(msg);
                }

            }
        });
    }

    private void exibirMensagem(String mensagem){
        AlertDialog.Builder allertDialog = new AlertDialog.Builder(MainActivity.this);
        allertDialog.setMessage(mensagem).show();
        return;
    }
}
