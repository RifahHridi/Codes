import java.util.Scanner;
public class setting{
    String name;
         int population;
         double growthRate;
     
    public setting(String a, int b, double c){
         String name = a;
         int population=b;
         double growthRate=c;
    }
     
    public void setdata(String newName,int newPopulation,double newGrowthrate){
        name=newName;
        population=newPopulation;
        growthRate=newGrowthrate;
    }
    public String getName(){
        return name;
    }
    public int getPopulation(){
        return population;
        
    }
    public double getgrowthRate(){
        return growthRate;
    }
    
    public static void main(String[] args){
        setting obj1 = new setting("name", 8, 9.9); // instantiating an object from a class
        

}
}
