class A{
    int i;
}
class B extends A{
    int i;
    B(int a,int b)
    {
        super.i=a;
        i=b;
    }
    void show()
    {
        System.out.println("the value of superclsaa member is "+super.i);
        System.out.println("the value os subclass is "+i);
    }
}
public class super1 {
    public static void main(String[] args) {
        B p=new B(12,14);
        p.show();
    }
    
}
