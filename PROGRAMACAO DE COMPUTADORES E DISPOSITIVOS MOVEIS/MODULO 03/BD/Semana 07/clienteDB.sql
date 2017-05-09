-- MySQL Script generated by MySQL Workbench
-- Mon May  8 20:28:59 2017
-- Model: New Model    Version: 1.0
-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema clienteDB
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema clienteDB
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `clienteDB` DEFAULT CHARACTER SET utf8 ;
USE `clienteDB` ;

-- -----------------------------------------------------
-- Table `clienteDB`.`cliente`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `clienteDB`.`cliente` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `nome` VARCHAR(45) NOT NULL,
  `numero` INT NULL,
  `cpf` VARCHAR(45) NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
