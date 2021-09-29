import java.util.Scanner;

public class App 
{
    public static void main(String[] args) throws Exception 
    {
        // Exercise01
        quadSolver(args);

        System.out.print("\n"); //just to make output pritier

        // Exercise02
        countCharacters("Hello", 'l');

        System.out.print("\n"); //just to make output pritier

        // Exercise03

        String firstString, secondString;
        String commonPrefix = "";

        Scanner kb = new Scanner(System.in);

        System.out.print("Enter the first string: ");
        firstString = kb.nextLine();
        System.out.print("Enter the second string: ");
        secondString = kb.nextLine();

        //use shorter lengthed string for for loop to prevent error
        int minLength = firstString.length() < secondString.length() ? firstString.length() : secondString.length();

        for (int i = 0; i < minLength; i++) 
        {
            if (firstString.charAt(i) == secondString.charAt(i)) 
            {
                commonPrefix += firstString.charAt(i); //add the common letter to commonPrefix
            } 
            else 
            {
                continue;
            }
        }

        System.out.println((commonPrefix.length() != 0) ? "The common prefix is " + commonPrefix
                : firstString + " and " + secondString + " have no common prefix");
    }

    // Exercise01
    public static void quadSolver(String[] args)

    {
        int numA, numB, numC;
        double answer1, answer2;

        Scanner kb = new Scanner(System.in);

        System.out.print("Enter value a: ");
        numA = kb.nextInt();
        System.out.print("Enter value b: ");
        numB = kb.nextInt();
        System.out.print("Enter value c: ");
        numC = kb.nextInt();

        double inside_root = Math.pow(numB, 2) - 4 * numA * numC;
        answer1 = (-numB + Math.sqrt(inside_root)) / (2 * numA);
        answer2 = (-numB - Math.sqrt(inside_root)) / (2 * numA);

        if (inside_root != 0) 
        {
            System.out.println("x = " + answer1 + " or x = " + answer2);
        } 
        else if (inside_root == 0) //there will be only one answer if inside of root is 0 
        {
            System.out.println("x = " + answer1);
        } 
        else 
        {
            System.out.println("Invalid input. Input integer");
        }
    }

    // Exercise02
    public static int countCharacters(String a_strText, char a_cChar) 
    {

        int count = 0;

        for (var i = 0; i < a_strText.length(); i++) 
        {
            if (a_strText.charAt(i) == a_cChar) 
            {
                count += 1;
            }
        }
        System.out.println("The occurance of '" + a_cChar + "' in " + a_strText + " is " + count);

        return count;

    }
}
