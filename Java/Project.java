import javax.swing.*;
import java.awt.Font;
import java.awt.event.*;  
public class Project extends JFrame implements ActionListener{  
    JLabel l,db,l1,nl,l2,m1;  
    JCheckBox cb1,cb2,cb3,cb4,cb5,cb6,cb7,cb8,cb9,cb10; 
    JTextField tf;
    JButton b;  
    
    Project()
    {  
        l=new JLabel("Food Ordering System"); 
        l.setFont(new Font("Arial Black", Font.PLAIN, 18));
        l.setBounds(120,7,300,25); 
        add(l);
        
        l1=new JLabel("_____________________________________________________________________");  
        l1.setBounds(0,25,500,20);
        add(l1);
        
        m1=new JLabel("Menu Along with its price:");  
        m1.setBounds(10,60,500,20);
        add(m1);
        
        cb1=new JCheckBox("Samosa ( Rs.20 )");  
        cb1.setBounds(55,90,150,20);  
        add(cb1);
        
        cb2=new JCheckBox("Kachori ( Rs.20 )");  
        cb2.setBounds(55,130,150,20);  
        add(cb2);
        cb3=new JCheckBox("VadaPav ( Rs.15 )");  
        cb3.setBounds(55,170,150,20);  
        add(cb3);
        cb4=new JCheckBox("Dhokla ( Rs.30 )");  
        cb4.setBounds(55,210,150,20);  
        add(cb4);
       
        cb5=new JCheckBox("Khandawi ( Rs.30 )");  
        cb5.setBounds(55,250,150,20);  
        add(cb5);
       
        cb6=new JCheckBox("Pizza ( Rs.80 )");  
        cb6.setBounds(260,90,150,20);  
        add(cb6);
        
        cb7=new JCheckBox("French Fries ( Rs.50 )");  
        cb7.setBounds(260,130,150,20);  
        add(cb7);
        
        cb8=new JCheckBox("Burger ( Rs.70 )");  
        cb8.setBounds(260,170,150,20);  
        add(cb8);
        
        cb9=new JCheckBox("Coffee ( Rs.25 )");  
        cb9.setBounds(260,210,150,20);  
        add(cb9);
        
        cb10=new JCheckBox("ColdDrinks ( Rs.25 )");  
        cb10.setBounds(260,250,150,20);  
        add(cb10);
        
        b=new JButton("Your Order");  
        b.setBounds(170,300,120,40);  
        b.addActionListener(this);  
        add(b);  
        
        db=new JLabel("Devloped By:");  
        db.setBounds(25,385,100,20); 
        add(db);
        
        nl=new JLabel("19IF207, 19IF208, 19IF209, 19IF2110, 19IF211, 19IF212.");  
        nl.setBounds(105,385,500,20);
        add(nl);
        
        l2=new JLabel("_____________________________________________________________________");  
        l2.setBounds(0,358,500,20); 
        add(l2);
       
        setSize(500,457);
        setLayout(null);  
        setVisible(true);  
        setDefaultCloseOperation(EXIT_ON_CLOSE);  
    }  
    public void actionPerformed(ActionEvent e){  
    	
        float amount=0;  
        String msg="";  
        if(cb1.isSelected()){  
            amount+=20;  
            msg="Samosa: 20\n";  
        }  
        if(cb2.isSelected()){  
            amount+=20;  
            msg+="Kachori: 20\n";  
        }  
        if(cb3.isSelected()){  
            amount+=15;  
            msg+="VadaPav: 15\n";  
        }  
        if(cb4.isSelected()){  
            amount+=30;  
            msg+="Dhokla: 30\n";  
        }  
        if(cb5.isSelected()){  
            amount+=30;  
            msg+="Khandawi: 30\n";  
        }  
        if(cb6.isSelected()){  
            amount+=80;  
            msg+="Pizza: 80\n";  
        }  
        if(cb7.isSelected()){  
            amount+=50;  
            msg+="French Fries: 50\n";  
        }  
        if(cb8.isSelected()){  
            amount+=70;  
            msg+="Burger: 70\n";  
        }  
        if(cb9.isSelected()){  
            amount+=25;  
            msg+="Coffee: 25\n";  
        }  
        if(cb10.isSelected()){  
            amount+=25;  
            msg+="ColdDrinks: 25\n";  
        }  
        msg+="-----------------\n";  
        JOptionPane.showMessageDialog(this,msg+"Total: "+amount);  
    }  
    public static void main(String[] args) {  
        new Project();  
    }  
}  
