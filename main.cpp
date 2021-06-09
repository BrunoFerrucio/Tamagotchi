#include <iostream>

// Bruno Ferrucio Almeida dos Santos
// Matricula: 202116914
int main() {
  // std::cout << "Hello World!\n";
  std::string nome, sexo;
  int idade = 0, fome = (rand() % 50) + 50, higiene = (rand() % 50) + 50, inteligencia = (rand() % 50) + 50, ativo = (rand() % 50) + 50, energia = (rand() % 50) + 50, feliz =  (rand() % 50) + 50, saude = (rand() % 50) + 50, command;
  bool status_vida = true;

  std::cout << "Digite o nome do tamagotchi (sem espaços): ";
  std::cin >> nome;

  std::cout << "Quer escolher o genero do seu tamagotchi ? (S/N): ";
  std::cin >> sexo;
  if(sexo == "s" || sexo == "S"){

    std::cout << "Escolha o genero do seu tamagotchi ? (macho / femea): ";
    std::cin >> sexo;

  }
  else{

    std::cout << "Genero do seu tamagotchi vai ser escolhido aleatoriamente...\n";
    int sex = (rand() % 2) -1;

    if(sex < 1){
      sexo = "macho";
      std::cout << "Genero escolido foi: " + sexo + "\n";
      
    }
    else{
      sexo = "femea";
      std::cout << "Genero escolido foi: " + sexo + "\n";
    }

  }


  std::cout << nome + " acabou de sair do ovo!\n\n";

  std::cout << "Idade: " + std::to_string(idade) + "\n";
  std::cout << "Fome: " + std::to_string(fome) + "\n";
  std::cout << "Higiene: " + std::to_string(higiene) + "\n";
  std::cout << "Inteligencia: " + std::to_string(inteligencia) + "\n";
  std::cout << "Atividade: " + std::to_string(ativo) + "\n";
  std::cout << "Energia: " + std::to_string(energia) + "\n";
  std::cout << "Felicidade: " + std::to_string(feliz) + "\n";
  std::cout << "Saúde: " + std::to_string(saude) + "\n";
  std::cout << "Está vivo :)\n\n";

  std::cout << "Agora voce pode interagir com "+ nome + "\n";


  for(int i = 0; saude < 0 || energia < 0; i++){

    std::cout << "Veja o que você pode fazer com " + nome + ": \n1 - COMER \n 2 - PRATICAR ESPORTE \n 3 - LER \n 4 - JOGAR \n 5 - TOMAR BANHO \n 6 - TOMAR REMÉDIO \n 7 - DORMIR \n 8 - SAIR DO JOGO\n";
    std::cout << "Escolha o número da atividade para " + nome + " fazer: ";
    std::cin >> command;

    if(command == 1){
      if(fome < 100 && saude > 50 || feliz > 50){
        fome = + 30;
        feliz = + 5;
        saude = + 10;
        higiene = - 10;
        energia = + 20;

        std::cout << "Fome: " + std::to_string(fome) + "receveu 30 pontos\n";
        std::cout << "Higiene: " + std::to_string(higiene) + "perdeu 10 pontos\n";
        std::cout << "Energia: " + std::to_string(energia) + "receveu 20 pontos\n";
        std::cout << "Felicidade: " + std::to_string(feliz) + "receveu 5 pontos\n";
        std::cout << "Saúde: " + std::to_string(saude) + "receveu 10 pontos\n";
      }
      else if(fome == 100 && feliz > 70 || feliz < 30){
        saude = - 10;
        feliz = + 10;

        std::cout << "Felicidade: " + std::to_string(feliz) + nome + " ganho 10 pontos\n";
        std::cout << "Saúde: " + std::to_string(saude) + ", o" + nome + " está comendo demais, perdeu 10 pontos\n";
      }
      else{
        std::cout << "Já estou bem alimentado\n";
      }

    }
    else if(command == 5){
      if(higiene < 30 && feliz > 10){
        higiene = 100;
        feliz = + 10;
        saude = + 10;

        std::cout << "Higiene: " + std::to_string(higiene) +", Agora sim eu tô totalmente limpo :)\n";
        std::cout << "Felicidade: " + std::to_string(higiene) +", Minha felicidade aumentou 10 pontos :)\n";
        std::cout << "Saúde: " + std::to_string(higiene) +", Minha saúde aumentou 10 pontos :)\n";
      }
      else{
        std::cout << "Já estou bem limpo, não preciso de banho agora :)\n";
      }

    }
    else if (command == 2){
      if(energia > 40 && saude > 50){
        fome = -20;
        energia = -30;
        saude = +20;
        feliz = +10;
        ativo = + 10;
        higiene = 0;

        std::cout << "Fome: " + std::to_string(fome) + ", Acho que tô ficando com fome :(\n";
        std::cout << "Higiene: " + std::to_string(higiene) + ", Poxa me sujei muito brincando aqui :o\n";
        std::cout << "Atividade: " + std::to_string(ativo) + ", Não brinca??? até minha atividade aumentou 10 pontos :0\n";
        std::cout << "Energia: " + std::to_string(energia) + ", Só que eu me canso brincando, minha energia perdeu 30 pontos :(\n";
        std::cout << "Felicidade: " + std::to_string(feliz) + ", Mesmo eu ficando mais cansado fiquei bem mais feliz, ganhei 10 pontos de felicidade\n";
        std::cout << "Saúde: " + std::to_string(saude) + ", Brinca aumentou minha saude em 20 pontos :0\n";
      }
      else{
        std::cout << "Não tô com vontade de brinca agora acho que minha energia tá baixa :(\n";
        std::cout << "Energia: " + std::to_string(energia) + "\n";
      }
    }
    else if (command == 3){
      if(energia > 10 || feliz > 50){
        std::cout << "Vamos ler então, talvez eu fique mais inteligente\n";
        inteligencia = + 10;
        energia = -5;

        std::cout << "Não disse que ia ser o melhor, fiquei até mais inteligente, agora tenho " + std::to_string(energia) + " pontos de inteligencia, ganhei 10 pontos, vamos ler mais ?\n";
        std::cout << "Até ler cansa, perdi 5 pontos de energia, agora tenho " + std::to_string(energia) + " pontos\n";

      }
      else{
        std::cout << "Leerr ???, tô muito cansado e triste de mais para ler, vamos tentar outra coisa\n";
      }
    }
    else if (command == 4){
      if(energia > 10 || feliz > 50){
        std::cout << "Não ia falar nada, mas eu tava querendo mesmo jogar um pouco kkkkkk";
        feliz = + 10;
        inteligencia = + 5;
        higiene = - 5;

        std::cout << "Felicidade: " + std::to_string(feliz) + "\n";
        std::cout << "Inteligencia: " + std::to_string(inteligencia) + "\n";
        std::cout << "Higiene: " + std::to_string(higiene) + "\n";
      }
      else{
        std::cout << "Vamos jogar uma outra hora \n";
      }

    }
    else if (command == 6){
      if(saude < 30){
        saude = + 10;
        std::cout << "Saúde: " + std::to_string(saude) + "\n";
      }
      else{
        std::cout << "Minha saude tá boa para tomar remedio";
      } 
    }
    else if (command == 7){
      if(energia < 30){
        if(saude > 30){
          energia = 100;
        }
        else{
          energia = + 30;
          saude = + 10;
        }
      }
      else{
        std::cout << "Não tô com sono agora";
      }
    }
    else if(saude == 0 || energia == 0){
      std::cout << "Infelizmente eu preciso te dizer que "+ nome + " veio a obito\n";
        std::cout << "Fome: " + std::to_string(fome) + "\n";
        std::cout << "Higiene: " + std::to_string(higiene) + "\n";
        std::cout << "Inteligencia: " + std::to_string(inteligencia) + "\n";
        std::cout << "Atividade: " + std::to_string(ativo) + "\n";
        std::cout << "Energia: " + std::to_string(energia) + "\n";
        std::cout << "Felicidade: " + std::to_string(feliz) + "\n";
        std::cout << "Saúde: " + std::to_string(saude) + "\n";
      break;
    }
    else if (command == 8){
      std::cout << "Então é assim ? vai me abandonar... foi bom esse tempo que passamos, Tchau\n";
      break;
    }

  }
  

}