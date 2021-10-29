import java.sql.*;
import java.util.Properties;

public class DatabaseConnection {

    Connection conn = null;
    Statement stmt = null;
    Driver d;

    public Connection  getConnection(String database_name)
    {
        try {
            d = (Driver) Class.forName("com.microsoft.sqlserver.jdbc.SQLServerDriver").newInstance();
            String db_url="jdbc:sqlserver://localhost;database=ThePieChart;integratedSecurity=true;";
            conn = d.connect(db_url, new Properties());
            System.out.println("Connected to ThePieChart");
            return conn;
        }
        catch(SQLException se){
            se.printStackTrace();
            return null;
        }
        catch(Exception e){
            e.printStackTrace();
            return null;
        }
        finally{


        }

    }


}