//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.java
//
//  Description :   Write a program which accept number of rows and number of columns from user and display below pattern.
//                  
//                  Input :     iRow = 6      iCol = 6
//                  
//                  Output :     
//                              *   *   *   *   *   *                                      
//                              *   #   #   #   *   *                                      
//                              *   #   #   *   $   *                                      
//                              *   #   *   $   $   *                                      
//                              *   *   $   $   $   *                                      
//                              *   *   *   *   *   *                                      
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


import java.util.*;

class Pattern
{
    public void Pattern(int iRow , int iCol)
    {
        int i = 0, j = 0;

        for(i = iRow; i >= 1; i--)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j || i == 1 || i == iRow || j == 1 || j == iCol )
                {
                    System.out.print("*"+"\t");
                }
                else if (i > j)
                {
                    System.out.print("#"+"\t");
                }
                else
                {
                    System.out.print("$"+"\t");;
                }
                
            }
            System.out.println();
        }
       
    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();
        
        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1,iValue2);

        sobj.close();


    }
}