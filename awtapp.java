import java.awt.*;
public class awtapp extends Frame{
    awtapp()
    {
        Label firstname=new Label("first name: ");
        firstname.setBounds(20,50,80,20);

        Label lastname = new Label("last name: ");
        lastname.setBounds(20,80,80,20);

        Label dob= new Label("date of birth");
        dob.setBounds(20,110,80,20);

        TextField firstnameTF= new TextField();
        firstnameTF.setBounds(120,50,100,20);

        TextField lastnameTF= new TextField();
        lastnameTF.setBounds(120,80,100,20);

        TextField dobTF= new TextField();
        dobTF.setBounds(120,110,100,20);

        Button sbmt =new Button("submit");
        sbmt.setBounds(20,160,100,30);

        Button reset = new Button("reset");
       reset.setBounds(120,160,100,30);
       add(firstname);
       add(lastname);
       add(dob);
       add(firstnameTF);
       add(dobTF);
       add(sbmt);
       add(reset);
       setSize(300,300);
       setLayout(getLayout());
       setVisible(true);
    }
    public static void main(String[] args) {
        awtapp awt = new awtapp();
    }

 }
