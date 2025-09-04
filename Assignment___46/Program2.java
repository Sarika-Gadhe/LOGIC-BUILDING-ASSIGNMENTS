//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.java
//
//  Description :   Write program which accept number of rows and number of columns from user and display below pattern.
//                  
//                  Input :     iRow = 4        iCol = 4
//                  
//                  Output :    A   B   C   D        
//                              a   b   c   d       
//                              A   B   C   D        
//                              a   b   c   d         
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
        char ch1 = 'a';
        char ch2 = 'A';

        for(i = 1; i <= iRow; i++,ch1='a',ch2='A')
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(ch1+"\t");
                    ch1++;
                }
                else
                {
                    System.out.print(ch2+"\t");
                    ch2++;
                }
                
            }
            System.out.println();
        }
       
    }
}

class Program2
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