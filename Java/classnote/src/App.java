import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        // int number1;
        // int number2;

        // number1 = 5;
        // number2 = 7;
        // int total;
        // total = number1 + number2;

        // need double "+" to concatenate integers and strings
        // System.out.println(number1 + " + " + number2 + " = " + total);

        // create the keyboard object
        // Scanner kb = new Scanner(System.in); //by heart
        //
        // double radius;
        // System.out.print("Input radius: "); //print() does not create a new line
        // radius = kb.nextDouble();
        // System.out.println("The radius is" + radius);
        // }

        // 9.06 if statement

        // Scanner kb = new Scanner(System.in);
        //
        // int number = 5;
        //
        // if (number > 0)
        // {
        // System.out.println("Positive");
        // System.out.println("Definetely positive");
        // }

        // 9.08 case

        // int number = 7;
        //
        // switch(number) //ok because number is integer
        // {
        // case 1:
        // System.out.println("A");
        // break; //needs this or else runs remaining cases.
        //
        // case 2:
        // System.out.println("B");
        // break;
        //
        // case 3:
        // System.out.println("C");
        // break;
        // last case doesn't need break but extra break would be fine
        //
        // default: // same as (_) for match in Rust
        // System.out.println("Please input a value between 1 and 3.");
        // break;
        //

        // }

        // Scanner kb = new Scanner(System.in);
        //
        // int day = 6;

        // check if a day is a weekday or weekend
        // 0 is sunday
        // 1 is monday
        // 6 is saturday
        // 1 to 5 is a weekday; 0 and 6 are weekend

        // switch(day)
        // {
        // case 1:
        // case 2:
        // case 3:
        // case 4:
        // case 5:
        // System.out.println("Weekday");
        // break;
        //
        // case 0: case 6:
        // System.out.println("Weekend");
        // break;
        //
        // default:
        // System.out.println("Input number between 0 to 6");
        // break;
        //
        // }
        //

        // pass by value

        // Scanner kb = new Scanner(System.in);
        //
        // int value = 5;
        //
        // System.out.println("Value before the function: " + value);
        // multiplyBy2(value);
        // System.out.println("Value after the function: " + value);
        //
        // }
        //
        // public static void multiplyBy2(int number) {
        //
        // number *= 2;
        // System.out.println("Value inside the function: " + number);

        // Scanner kb = new Scanner(System.in);
        // System.out.println("Max = " + max(2, 6));
        // }
        //
        // public static int max(int num1, int num2) {
        // System.out.println("max(int num1, int num2 called...");
        //
        // if (num1 < num2) {
        // return num2;
        // }
        // return num1;
        // }
        //
        // public static double max(double num1, double num2) {
        //
        // System.out.println("max(double num1, double num2 called...");
        //
        // if (num1 < num2) {
        // return num2;
        // }
        // return num1;
        // }
        //
        // public static double max(double num1, int num2) {
        //
        // System.out.println("max(double num1, int num2 called...");
        //
        // if (num1 < num2) {
        // return num2;
        // }
        // return num1;
        // }

        Scanner kb = new Scanner(System.in);

        int[] arr1 = { 1, 2, 3 };
        int[] arr2 = { 4, 5, 6, 7, 8 };

        arr2 = arr1; // arr2 now pinting to arr1

        for (int i = 0; i < arr2.length; i++) {
            System.out.print(arr2[i] + " ");
        }
        System.out.println();
    }

    public static void printArray(int[] array) {
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
        System.out.println();
    }

    public static void multiplyByTwo(int[] array) {
        for (int i = 0; i < array.length; i++) {
            array[i] = array[i] * 2;
        }
    }
}