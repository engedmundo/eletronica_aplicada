# 1 - Formulação verbal do problema
O cilindro de uma prensa para estampagem deve avançar com, no mínimo, uma das seguintes condições de comando satisfeita:

1) Os dois botões manuais devem estar acionados
2) A grade de proteção deve estar fechada e o pedal acionado
3) A grade de proteção deve estar fechada e um dos dois comandos manuais deve estar acionado

# 2 - Elaboração de uma tabela de correspondência lógica

| Variável              | Tipo     | Notação | Correspondência lógica |
| -                     | -        | -       | -                      |
| Botão Manual Esquerdo |  Entrada | B1   | Botão acionado -> B1 = 1 |
| Botão Manual Direito  |  Entrada | B2   | Botão acionado -> B2 = 1 |
| Grade de proteção     |  Entrada | G    | Grade fechada -> G = 1 |
| Pedal Acionamento     |  Entrada | P    | Pedal acionado -> P = 1 |
| Cilindro prensa       |  Saída   | C    | Cilindro avançado -> C = 1 |


# 3 - Elaboração de uma tabela verdade
Combinações possíveis -> 4 variáveis

$2^4 = 16$

16 combinações

| B1 | B2 | G | P | **C** |
| -  | -  | - | - | -     |
| 0  | 0  | 0 | 0 | 0     |
| 0  | 0  | 0 | 1 | 0     |
| 0  | 0  | 1 | 0 | 0     |
| 0  | 0  | 1 | 1 | 1     |
| 0  | 1  | 0 | 0 | 0     |
| 0  | 1  | 0 | 1 | 0     |
| 0  | 1  | 1 | 0 | 1     |
| 0  | 1  | 1 | 1 | 1     |
| 1  | 0  | 0 | 0 | 0     |
| 1  | 0  | 0 | 1 | 0     |
| 1  | 0  | 1 | 0 | 1     |
| 1  | 0  | 1 | 1 | 1     |
| 1  | 1  | 0 | 0 | 1     |
| 1  | 1  | 0 | 1 | 1     |
| 1  | 1  | 1 | 0 | 1     |
| 1  | 1  | 1 | 1 | 1     |
