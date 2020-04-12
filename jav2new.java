
   public class jav2new {

    
      
        public void myMethod(){
	System.out.println("Overridden Method");}
    
     public static void main(String[] args) 
    { 
        Dog tuffy;
            tuffy = new Dog();
        System.out.println(tuffy.toString());
        
       
        tuffy.setname("tuffy");
        tuffy.setcolor("brown");
        tuffy.setgender("male");
        tuffy.myMethod();
    } 
}

