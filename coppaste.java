import java.util.*;
import java.util.Scanner;

    
public class coppaste{

   
   String name;
   String mail;
       
        
        
       
    
    void menu(){
        System.out.println("Welcome to our Restaurant Java");
         System.out.println("Please have the menu");
         
        ArrayList <String> val= new ArrayList<String>();
        
        
       val.add("1.Pasta");
       val.add("2.French fry");
       val.add("3. Burger");
       val.add("4.Pizza");
      
       
       Iterator itr= val.iterator();
       while (itr.hasNext()){
           System.out.println(itr.next());
       }
        
   }

void openaccount(){
     Scanner kb= new Scanner (System.in);
     System.out.println("Name please:");
      name= kb.next();
     
    System.out.println("Mail please:");
     mail= kb.next();
     kb.close();
    
}
void showaccount(){
    System.out.println("Account:"+name+"Mail:"+mail);
}
void personm(){
    Scanner kb= new Scanner (System.in);
    
     System.out.println("How many person :");
     int person= kb.nextInt();
      

       coppaste n[] = new coppaste[person];
       for (int i=0;i<person;i++){
       n[i]= new coppaste();
       n[i].showaccount();
       n[i].menu();
       }
        System.out.println("Enter order :");
     int or= kb.nextInt();
     do{
     switch(or){
         case 1 :
             System.out.println("1.pasta");
             int pasta= kb.nextInt();
             int a=10;
             int s= a*pasta;
             break;
         case 2 :
             
          System.out.println("2.French fry");
             int Frenchfry= kb.nextInt();
             int b=10;
             int s1 = b*Frenchfry;
             break;
         case 3 : 
                System.out.println("3.Burger");
             int Burger= kb.nextInt();
             int c=10;
             int s2 = c*Frenchfry;
         break;
         case 4 :
              System.out.println("4.Pizza");
             int pizza= kb.nextInt();
             int d=10;
             int s3 = d*Frenchfry;
             break;
        
            
         
       }
     }while(or!=9);
   }

}










