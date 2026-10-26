package Main;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.println("Enter a number to check whether it is prime number or not");
        Scanner scn=new Scanner(System.in);
        int num=scn.nextInt();


        if(num<=0){
            System.out.println("Please enter a positive number");
        } else if (num==1) {
            System.out.println("Neither prime nor composite");
        }
        else{
            int counter=0;
            for(int i = 2 ;i*i<=num;i++){
                if(num%i==0){
                    counter++;
                    break;
                }
            }

            if(counter>=1){
                System.out.println("not prime!!");

            }else{
                System.out.println("prime!!");
            }
        }



    }
}