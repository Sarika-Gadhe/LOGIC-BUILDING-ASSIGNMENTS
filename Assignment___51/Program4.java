//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.java
//
//  Description :   Write a program which acccept matrix from user and trace and normal of given matrix.
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
        Arr = new int [A][B];
     }


     public void Accept()
     {
        System.out.println("Enter Number of Elements : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;
        
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
     }

     public void Display()
     {
        System.out.println("Number of Elements are : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;
        
        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
     }

     
     public int SumDiagonal()
     {
        int iSum = 0;
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j< Arr[i].length; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
     }

     public double NormalMatrix()
     {
        int iSum = 0;
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j< Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }

        return FindSqrt(iSum);
     }

     public double FindSqrt(double dNo)
     {
        if(dNo == 0)
        {
            return 0;
        }

        double x = dNo;
        double y = (x + dNo / x) / 2;;

        while (Math.abs(x - y) > 0)
        {
            x = y;
            y = (x + dNo / x)/2;
        }

        return y;

     }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter Number of Columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        
        System.out.println("Summation of Diagonal Elements are : "+mobj.SumDiagonal());

        double normal = mobj.NormalMatrix();
        System.out.println("Normal of matrix is : "+normal);

        


    }
}