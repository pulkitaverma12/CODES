import java.awt.*;
class button1 extends Frame{
    button1()
    {
        Button b = new Button("click me");
        b.setBounds(30,100,80,30);
        add(b);
        setSize(300,300);
        setLayout(null);
        setVisible(true);
    }
    public static void main(String[] args) {
        button1 f = new button1();
    }
}
