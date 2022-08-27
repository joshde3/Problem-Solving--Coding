class Exception1 extends Exception{}
class Exception2 extends Exception1{}

public class Test{
    public static void main(String[] args) {
        // int x=getValue();
        // System.out.println(x);
        try {
            throw new Exception2();
        }
        catch(Exception1 | Exception2 e){
            System.out.println(""Exception1 caught"";);
        }

    }
    public static int getValue(){
        return 10;
    }
}