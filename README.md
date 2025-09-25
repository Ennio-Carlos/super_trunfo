# Super Trunfo em C 🃏

Este projeto é uma implementação do jogo **Super Trunfo** em linguagem C.  
O programa permite cadastrar duas cartas de cidades, calcular atributos como **densidade populacional** e **PIB per capita**, além de comparar as cartas para determinar a vencedora em cada atributo, incluindo o cálculo de um **Super Poder**.

---

## ⚙️ Funcionalidades

- Cadastro de duas cartas com:
  - Estado (A–H)
  - Código (ex: A01, B02)
  - Nome da cidade
  - População (armazenada em `unsigned long int`)
  - Área (km²)
  - PIB (em bilhões de reais)
  - Número de pontos turísticos
- Cálculo automático de:
  - Densidade populacional (`população / área`)
  - PIB per capita (`PIB / população`)
  - Super Poder (soma dos atributos numéricos, considerando o **inverso da densidade populacional**)
- Comparação entre cartas:
  - Para densidade populacional → **vence a menor**
  - Para os demais atributos (inclusive Super Poder) → **vence a maior**
- Exibição clara dos resultados:
  - Mostra carta vencedora de cada atributo (`Carta 1 venceu (1)` ou `Carta 2 venceu (0)`).
