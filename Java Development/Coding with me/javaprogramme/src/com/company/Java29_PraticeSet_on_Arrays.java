package com.company;

public class Java29_PraticeSet_on_Arrays {

    public static void main(String[] args) {

        float[] arr = {23.5f, 63.6f, 5.6f, 3.2f, 1.2f};
//        float sum = 0;
//        for (float element :arr) {
//            System.out.println(element);
//            sum = element + sum;
//        }
//        System.out.println("The sum of the array is " + sum);

        float num = 63.6f;
        boolean isInArray = false;


        for (float element : arr) {

            System.out.println(element);
            if(num==element) {
                isInArray =true;
            }
        }
            if(isInArray)
        {
            System.out.println("The given element is present in an array and at location");
        }
        else
        {
            System.out.println("IS not present in an array");
        }
    }
}
