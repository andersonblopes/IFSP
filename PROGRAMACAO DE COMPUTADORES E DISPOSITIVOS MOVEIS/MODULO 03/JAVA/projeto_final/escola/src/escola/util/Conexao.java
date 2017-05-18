package escola.util;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

/**
 *
 * @author Anderson Lopes
 */
public class Conexao {

    private static Conexao instance = null;
    private Connection connection = null;

    private Conexao() {
        try {
            String driverName = "com.mysql.jdbc.Driver";

            Class.forName(driverName);

            String serverName = "127.0.0.1";
            String dbName = "escoladb";

            String url = "jdbc:mysql://" + serverName + "/" + dbName;

            String username = "root";
            String password = "root";

            connection = DriverManager.getConnection(url, username, password);
            connection.setAutoCommit(true);
        } catch (ClassNotFoundException e) {
            System.out.println("O driver expecificado nao foi encontrado.");
        } catch (SQLException e) {
            System.out.println("Nao foi possivel conectar ao Banco de Dados.");
        }
    }

    public static Conexao getInstance() {
        if (instance == null) {
            instance = new Conexao();
        }
        return instance;
    }

    public java.sql.Connection getConnection() {
        return connection;
    }

}
