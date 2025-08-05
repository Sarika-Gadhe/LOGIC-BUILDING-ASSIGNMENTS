//_______________________________________________________________________________________________________________________________
//
//  File name :     Program4.java
//
//  Description :   Write a program which accept matrix and check whether the matrix is identity matrix or not.
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
    
    public Boolean checkIdentity()
    { 
       int i = 0, j = 0; 
       int iRow = Arr.length;
       int iCol = Arr[0].length;

       if(iRow != iCol)
       {
            return false;
       }

       for(i = 0; i < Arr.length;i++)
       {
            for(j = 0; j < Arr[i].length; j++)
            {
                if(i == j)
                {
                   if(Arr[i][j] != 1)
                   {
                        return false;
                   } 
                }
                else
                {
                    if(Arr[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
        }

        return true;


    }

}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iRow = 0, iCol = 0;
        boolean bRet = false;

        System.out.println("Enter the number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of Columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        bRet = mobj.checkIdentity();

       if(bRet)
       {
            System.out.println("Matrix is Identity Matix");
       }
       else
       {
            System.out.println("Matrix is not  Identity Matrix");
       }

    }
}