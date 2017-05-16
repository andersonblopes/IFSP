package escola.dao;

import escola.model.Disciplina;
import escola.util.Conexao;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Anderson Lopes
 */
public class DisciplinaDAO {

    public boolean save(Disciplina disciplina) {
        try {
            String comando = "INSERT INTO disciplina (descricao, carga_horaria, curso, vagas, periodo) VALUES (?,?,?,?,?)";
            PreparedStatement statement = getConnection().prepareStatement(comando);
            statement.setString(1, disciplina.getDescricao());
            statement.setInt(2, disciplina.getCargaHoraria());
            statement.setString(3, disciplina.getCurso());
            statement.setInt(4, disciplina.getVagas());
            statement.setString(5, disciplina.getPeriodo());
            statement.executeUpdate();
            return true;
        } catch (SQLException ex) {
            Logger.getLogger(DisciplinaDAO.class.getName()).log(Level.SEVERE, null, ex);
            return false;
        }

    }

    public Connection getConnection() {
        return Conexao.getInstance().getConnection();
    }

}
