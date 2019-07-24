while True:
  try:

      n = int(input())
      for i in range(n):
          entrada = input().split()
          conjunto = len(entrada) - 1
          pontos = len(entrada[0])
          letra = (3 * conjunto) + pontos
          print(chr(letra + 96))
  except EOFError:
    break
