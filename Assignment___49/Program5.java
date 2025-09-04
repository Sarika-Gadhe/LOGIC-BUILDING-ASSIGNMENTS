//_______________________________________________________________________________________________________________________________
//
//  File name :     Program5.java
//
//  Description :   Write a program which accept String from user and display below pattern.
//                  
//                  Input :     Hello
//                  
//                  Output :    
//                              H   #   #   #   #     
//                              H   e   #   #   #  
//                              H   e   l   #   #    
//                              H   e   l   l   #     
//                              H   e   l   l   o         
//                              H   e   l   l   #
//                              H   e   l   #   #    
//                              H   e   #   #   #     
//                              H   #   #   #   #
//                                   
//                                   
//
//  Author :        Sarika Devidas Gadhe
//
//_______________________________________________________________________________________________________________________________


import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        int i = 0, j = 0;

       for(i = 1; i <= str.length(); i++)
        {
            for(j = 0; j < str.length() ; j++)
            {
                if(i > j)
                {
                    System.out.print(str.charAt(j)+"\t");
                }  
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }

        for(i = str.length()-1; i >= 1; i--)
        {
            for(j = 0; j < str.length() ; j++)
            {
                if(i > j)
                {
                    System.out.print(str.charAt(j)+"\t");
                }  
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }
       
       
    }
}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();
       

        Pattern pobj = new Pattern();
        pobj.Pattern(str);

        sobj.close();


    }
}