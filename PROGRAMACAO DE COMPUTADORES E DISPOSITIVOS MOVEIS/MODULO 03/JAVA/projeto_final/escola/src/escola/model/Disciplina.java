package escola.model;

import java.io.Serializable;

/**
 *
 * @author Anderson Lopes
 */
public class Disciplina implements Serializable {

    private int id;
    private String descricao;
    private int cargaHoraria;
    private int vagas;
    private String curso;
    private String periodo;

    public Disciplina() {
    }

    public Disciplina(String descricao, int cargaHoraria, int vagas, String curso, String periodo) {
        this.descricao = descricao;
        this.cargaHoraria = cargaHoraria;
        this.vagas = vagas;
        this.curso = curso;
        this.periodo = periodo;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public int getCargaHoraria() {
        return cargaHoraria;
    }

    public void setCargaHoraria(int cargaHoraria) {
        this.cargaHoraria = cargaHoraria;
    }

    public int getVagas() {
        return vagas;
    }

    public void setVagas(int vagas) {
        this.vagas = vagas;
    }

    public String getCurso() {
        return curso;
    }

    public void setCurso(String curso) {
        this.curso = curso;
    }

    public String getPeriodo() {
        return periodo;
    }

    public void setPeriodo(String periodo) {
        this.periodo = periodo;
    }

    @Override
    public int hashCode() {
        int hash = 7;
        hash = 89 * hash + this.id;
        return hash;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null) {
            return false;
        }
        if (getClass() != obj.getClass()) {
            return false;
        }
        final Disciplina other = (Disciplina) obj;
        if (this.id != other.id) {
            return false;
        }
        return true;
    }

    @Override
    public String toString() {
        return "Disciplina{" + "id=" + id + ", descricao=" + descricao + ", cargaHoraria=" + cargaHoraria + ", vagas=" + vagas + ", curso=" + curso + ", periodo=" + periodo + '}';
    }

}
