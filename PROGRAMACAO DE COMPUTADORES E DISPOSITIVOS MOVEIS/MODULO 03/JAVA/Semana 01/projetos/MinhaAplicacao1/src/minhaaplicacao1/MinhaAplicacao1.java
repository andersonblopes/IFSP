/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package minhaaplicacao1;

import javax.swing.JFrame;

/**
 *
 * @author ander
 */
public class MinhaAplicacao1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int a, b, multi, i;
        a=10;
        b=10;
        multi = a+b;
        
        for(i=0; i <10; i++){
            int aux = multi+i;
            System.out.println("O resultado da multiplicação é: "+aux);
        }
        
        JFrame janela = new JFrame("Meu primeiro frame em Java");
        janela.setSize(300,200);
	janela.setVisible(true);


    }
    
}
