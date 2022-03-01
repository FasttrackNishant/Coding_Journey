package com.company;

import java.util.Scanner;

public class Java06_CBSE_Example {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.println("Enter the marks of Student in Subject 1");
        int subject1 = input.nextInt();
        System.out.println("Enter the marks of Student in Subject 2");
        int subject2 = input.nextInt();
        System.out.println("Enter the marks of Student in Subject 3");
        int subject3 = input.nextInt();
        System.out.println("Enter Total Marks of the Subject ");
        int totalmarks = input.nextInt();
        System.out.println("The marks of Student in Subject 1 :" + subject1);
        System.out.println("The marks of Student in Subject 2 :" + subject2);
        System.out.println("The marks of Student in Subject 3 :" + subject3);
        int percentage = ((subject1 + subject2 + subject3) / totalmarks);
        System.out.println("The Percentage of the student is " + percentage + "%");

    }
}
