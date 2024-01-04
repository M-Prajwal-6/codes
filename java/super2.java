class animal
{
    animal()
    {
        System.out.println("animal is on a hint ");
    }
}
class parent3 extends animal{
    parent3()
    {
        super();
        System.out.println("animal is on move");
    }
}
public class super2 {
     public static void main(String[] args) {
       parent3 pop=new parent3(); 
     }
    
}
