import java.io.PrintStream;

public class StringMethodsDemo {
   public StringMethodsDemo() {
   }

   public static void main(String[] var0) {
      String var1 = "Java is fun to learn";
      String var2 = "JAVA";
      String var3 = "Java";
      String var4 = "  Hello Java  ";
      System.out.println("Char at index 2(third position): " + var1.charAt(2));
      System.out.println("After Concat: " + var1.concat("-Enjoy-"));
      PrintStream var10000 = System.out;
      boolean var10001 = var3.equalsIgnoreCase(var2);
      var10000.println("Checking equals ignoring case: " + var10001);
      var10000 = System.out;
      var10001 = var3.equals(var2);
      var10000.println("Checking equals with case: " + var10001);
      System.out.println("Checking Length: " + var1.length());
      System.out.println("Replace function: " + var1.replace("fun", "easy"));
      System.out.println("SubString of targetString: " + var1.substring(8));
      System.out.println("SubString of targetString: " + var1.substring(8, 12));
      System.out.println("Converting to lower case: " + var1.toLowerCase());
      System.out.println("Converting to upper case: " + var1.toUpperCase());
      System.out.println("Triming string: " + var4.trim());
      var10000 = System.out;
      var10001 = var1.contains(var2);
      var10000.println("searching s1 in targetString: " + var10001);
      var10000 = System.out;
      var10001 = var1.contains(var3);
      var10000.println("searching s2 in targetString: " + var10001);
      char[] var5 = var3.toCharArray();
      System.out.println("Size of char array: " + var5.length);
      System.out.println("Printing last element of array: " + var5[3]);
   }
}
