//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.java
//
//  Description :   Write program which accept number of rows and number of columns from user and display below pattern.
//                  
//                  Input :     iRow = 4        iCol = 5
//                  
//                  Output :    4   4   4   4   4        
//                              3   3   3   3   3       
//                              2   2   2   2   2
//                              1   1   1   1   1          
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
        int iCount = iRow;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
               System.out.print(iCount+"\t");
            }
            iCount--;
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


    }
}