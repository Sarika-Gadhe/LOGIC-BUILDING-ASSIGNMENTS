//_______________________________________________________________________________________________________________________________
//
//  File name :     Program2.java
//
//  Description :   Write a program which accept matrix and reverse the content of each row.
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________



import java.util.*;

class Matrix
{
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("Please Enter the elements of matrix : ");

        Scanner sobj = new Scanner(System.in);
        
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        Scanner sobj = new Scanner(System.in);
        
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    
    public void ReverseRow()
    { 
       int i = 0;
       int iStart = 0;
       int iEnd  = 0;
       int temp = 0 ;
       

       for(i = 0; i < Arr.length; i++)
       {
            iStart = 0;
            iEnd = Arr[i].length - 1;

            while(iStart < iEnd)
            {
                temp = Arr[i][iStart];
                Arr[i][iStart] = Arr[i][iEnd];
                Arr[i][iEnd] = temp;

                iStart++;
                iEnd--;
            }
       }

       System.out.println("Reverse Matrix is : ");

    }

}

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iRow = 0, iCol = 0;

        System.out.println("Enter the number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of Columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        mobj.ReverseRow();
        mobj.Display();

    }
}