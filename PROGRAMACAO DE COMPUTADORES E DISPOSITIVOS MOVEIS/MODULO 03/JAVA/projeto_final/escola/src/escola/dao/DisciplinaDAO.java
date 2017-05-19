package escola.dao;

import escola.model.Disciplina;
import escola.util.Conexao;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

/**
 *
 * @author Anderson Lopes
 */
public class DisciplinaDAO {

    //Insere registro na base de dados
    public boolean save(Disciplina disciplina) {
        try {
            //Query a ser executado
            String comando = "INSERT INTO disciplina (descricao, carga_horaria, curso, vagas, periodo) VALUES (?,?,?,?,?)";
            PreparedStatement statement = getConnection().prepareStatement(comando);

            //Parametros setados para a query
            statement.setString(1, disciplina.getDescricao());
            statement.setInt(2, disciplina.getCargaHoraria());
            statement.setString(3, disciplina.getCurso());
            statement.setInt(4, disciplina.getVagas());
            statement.setString(5, disciplina.getPeriodo());

            //Execução da query
            statement.executeUpdate();
            return true;
        } catch (SQLException ex) {
            System.out.println("Erro ao tentar inserir dados!!!" + "\n" + ex.getMessage());
            return false;
        }
    }

    //Obtém lista de disciplinas cadastradas
    public ResultSet listarDados() {
        try {
            String comando = "SELECT * FROM disciplina;";
            return getConnection().createStatement().executeQuery(comando);
        } catch (SQLException ex) {
            System.out.println("Erro ao buscar dados!!!" + "\n" + ex.getMessage());
            return null;
        }
    }

    //Exclui disciplina com base no id forbecido
    public boolean removerDisciplina(int id) {
        try {
            String comando = "DELETE FROM disciplina WHERE id = " + id + ";";
            getConnection().createStatement().executeUpdate(comando);
            return true;
        } catch (SQLException ex) {
            System.out.println("Erro ao excluir disciplina!!!" + "\n" + ex.getMessage());
            return false;
        }
    }

    //Obtém conexão
    public Connection getConnection() {
        return Conexao.getInstance().getConnection();
    }

}
