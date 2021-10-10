// WAP in JAVA APPLET to find bouncing ball and bounce back on hitting edge
package Applet;
import java.applet.*;
import java.awt.*;
public class BouncingBall extends Applet implements Runnable 
{
	// coordinates and radius of circle
	int x = 150, y = 50, r=20;   
	int dx = 11, dy = 7;          
	// creating thread
	Thread t;
	boolean stopFlag;
	// start thread.
	public void start() 
	{
		t = new Thread(this);
		stopFlag=false; 
		t.start();
	}
	// Draw cicle from its present position.
	public void paint(Graphics g) 
	{
		g.setColor(Color.red);
		g.fillOval(x-r, y-r, r*2, r*2);
	}
	// function to move the image.
	public void run() 
	{
		while(true)
		{
			if(stopFlag)
				break;
			// Bounce if we've hit an edge.
			if ((x - r + dx < 0) || (x + r + dx > bounds().width)) dx = -dx;
			if ((y - r + dy < 0) || (y + r + dy > bounds().height)) dy = -dy;
			x += dx;  y += dy;
			try
			{
				Thread.sleep(100);
			}
			catch(Exception e)
			{
				System.out.println(e);
			};
			repaint();
		}
	}
	public void stop()// To stop
	{
		stopFlag=true;
		t=null;
	}
}