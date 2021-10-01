package Calculator;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.text.Format;
import java.util.stream.DoubleStream.Builder;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.border.Border;

 
 public class Calculator{
JFrame frame = new JFrame();
JPanel panel = new JPanel();
JTextArea textarea = new JTextArea(2,10);

JButton button1 = new JButton();
JButton button2 = new JButton();
JButton button3 = new JButton();
JButton button4 = new JButton();
JButton button5= new JButton();
JButton button6 = new JButton();
JButton button7 = new JButton();
JButton button8 = new JButton();
JButton button9= new JButton();
JButton button0 = new JButton();

JButton buttonadd = new JButton();
JButton buttonsub = new JButton();
JButton buttonmul = new JButton();
JButton buttondiv = new JButton();
JButton buttonclear = new JButton();
JButton buttondot = new JButton();
JButton buttonequal  = new JButton();

double number1, number2, result;
int add =0, mul =0, sub =0, div =0;

  public Calculator(){
   frame.setSize(340,440);
   frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
   frame.setTitle("Simple Calculator ");

  //frame.setResizable(false)
frame.add(panel);
 Border border =BorderFactory.createLineBorder(Color.WHITE,4);
panel.add(textarea);
textarea.setBackground(Color.BLACK);
Border tborder = BorderFactory.createLineBorder(Color.BLUE,3);
Font font = new Font("Times New Roman", Font.BOLD,33);
textarea.setFont(font);
textarea.setForeground(Color.WHITE);

textarea.setPreferredSize(new Dimension(2,10));
textarea.setLineWrap(true);
}
}