import java.util.Scanner;

import javax.lang.model.util.ElementScanner14;

public class App
{
    public static void main(String[] args) throws Exception
    {
        //Exercise01
        //upper letter code values are 65 to 90
        //a = 65, a + b = 91, b = 26

        int numRand = 65 + (int)(Math.random() * 26);
        char numChar = (char)numRand;

        System.out.println("Random uppercase letter: " + numChar);


        //Exercise02
        Scanner kb = new Scanner(System.in);

        System.out.print("\nEnter a year: ");
        int numYear = kb.nextInt();

        System.out.print("Enter a month: ");
        String strMonth = kb.next(); //.next, not .nextLine --> .next for 1 word, .nextLine for 1 sentence

        if (strMonth.equals("Jan") || strMonth.equals("Mar") || strMonth.equals("May") || strMonth.equals("Jul") || strMonth.equals("Aug") || strMonth.equals("Oct") || strMonth.equals("Dec"))
        {
            System.out.println(strMonth + " " + numYear + " has 31 days");
        }
        else if (strMonth.equals("Apr") || strMonth.equals("Jun") || strMonth.equals("Sep") || strMonth.equals("Nov"))
        {
            System.out.println(strMonth + " " + numYear + " has 30 days");
        }
        else if (strMonth.equals("Feb"))
        {
            if (numYear %4 == 0 && numYear % 100 != 0 || numYear % 400 == 0)
                {
                System.out.println(strMonth + " " + numYear + " has 29 days");
                }
            else
                {
                System.out.println(strMonth + " " + numYear + " has 28 days");
                }
        }
        else
        {
            System.out.println("Error. Enter year and first three letters of a month name.");
        }


        //Exercise03

       Scanner kb2 = new Scanner(System.in);

        System.out.print("\nEnter two characters: ");
        String strInput = kb2.next();
        char charMajor = strInput.charAt(0);
        char charGrade = strInput.charAt(1);

      switch (charMajor)
      {
          case 'M':
            switch (charGrade)
            {
                case '1':
                    System.out.println("Mathematics Freshman");
                    break;

                case '2':
                   System.out.println("Mathematics Sophomore");
                   break;

                case '3':
                    System.out.println("Mathematics Junior");
                    break;

                case '4':
                    System.out.println("Mathematics Senior");
                    break;

                default:
                    System.out.println("Invalid output");
                    System.exit(1);
                    break;

            }
            break;

          case 'C':
            switch (charGrade)
            {
                case '1':
                    System.out.println("Computer Science Freshman");
                    break;

                case '2':
                   System.out.println("Computer Science Sophomore");
                   break;

                case '3':
                    System.out.println("Computer Science Junior");
                    break;

                case '4':
                    System.out.println("Computer Science Senior");
                    break;

                default:
                    System.out.println("Invalid output");
                    System.exit(1);
                    break;

            }
            break;

          case 'I':
            switch (charGrade)
            {
                case '1':
                    System.out.println("Information Technology Freshman");
                    break;

                case '2':
                   System.out.println("Information Technology Sophomore");
                   break;

                case '3':
                    System.out.println("Information Technology Junior");
                    break;

                case '4':
                    System.out.println("Information Technology Senior");
                    break;

                default:
                    System.out.println("Invalid output");
                    System.exit(1);
                    break;

            }
            break;

          default:
            System.out.println("Invalid output");
            System.exit(1);
            break;
      }
    }
}
