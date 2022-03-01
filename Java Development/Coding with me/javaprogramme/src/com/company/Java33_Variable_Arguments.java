package com.company;

public class Java33_Variable_Arguments {
    public static  int sum(int x, int ...arr)
    {//int[]arr
        int result =x;
        for (int a :arr) {
            result += a;
        }
        return  result;

    }
    public static void main(String[] args) {
        System.out.println("Hi Java");


        System.out.println("The anaser is "+sum(4,5));
        System.out.println("The anaser is "+sum(3));
        System.out.println("The anaser is "+sum(4,50,47895));
        System.out.println("The anaser is "+sum(4,50,47895,1));



    }
}


