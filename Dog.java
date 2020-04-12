public class Dog extends cat{

    
    public void dance(){
        System.out.println("cat dance");
    }
         public void plays(){
    System.out.println("cat play");
}
    
    String name;
    String color;
    String gender;
    private String breed;
    
    
    Dog(String name,String color, String gender){
        this.name= name;
        this.color= color;
       this.gender= gender;
    
    }
    
    public void myMethod(){
        System.out.println("Overriding");
    }
    public void setname( String name ) {
      this.name= name;
   }
    public String getname(){
        return name;
    }
     public void setcolor( String color ) {
      this.color=color;
   }
     public String getcolor(){
        return color;
    }
      public void setgender( String gender ) {
      this.gender=gender;
   }
      public String getgender(){
        return gender;
    }
      public void setbreed(){
        gender="Male";
    }
    public String getbreed(){
        return breed;
    }
    
   }
    abstract public class cat{
        abstract public void dance();
         abstract public void plays();
        
    }


    
             
    
   
    

