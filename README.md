# Super Trunfo - Países do Mundo

Jogo de cartas Super Trunfo em C para comparar países.

## Como Compilar

```bash
gcc super_trunfo.c -o super_trunfo
```

## Como Executar

```bash
./super_trunfo
```

## Como Jogar

1. Digite os dados do primeiro país (nome, população, área, PIB, pontos turísticos)
2. Digite os dados do segundo país
3. Escolha um atributo para comparar (1 a 5)
4. Veja qual país venceu!

## Atributos

- **1** - População (maior vence)
- **2** - Área (maior vence)
- **3** - PIB (maior vence)
- **4** - Pontos Turísticos (maior vence)
- **5** - Densidade Demográfica (menor vence)

## Exemplo

```
Digite o nome do pais: Brasil
Digite a populacao: 215000000
Digite a area em km^2: 8515767
Digite o PIB (em bilhoes de reais): 9500
Digite o numero de pontos turisticos: 150

...

Digite sua escolha (1-5): 1

Resultado: Carta 1 (Brasil) venceu!
```