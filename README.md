# 🏛️ Cartório da EBAC

Este é um sistema simples de **cartório digital** desenvolvido em **C**, permitindo **registrar, consultar e deletar registros de usuários**. Criado para fins acadêmicos, o sistema simula um banco de dados baseado em arquivos de texto.

---

## 📜 Funcionalidades

✅ **Registro de usuários** com CPF, nome, sobrenome e cargo.  
✅ **Consulta de registros** a partir do CPF.  
✅ **Exclusão de registros** de forma definitiva.  
✅ **Autenticação de administrador** com senha pré-definida.  
✅ **Interface interativa** no terminal.  

---

## 🚀 Como Executar

### **1️⃣ Compilar o programa**
Certifique-se de ter um compilador C instalado, como **GCC**.

```bash
gcc CartorioEBAC.c -o CartorioEBAC
```

### **2️⃣ Executar o programa**
Após a compilação, execute o arquivo gerado:

```bash
./CartorioEBAC
```

### **3️⃣ Usar o sistema**
Siga o menu exibido no terminal para **registrar, consultar ou deletar** usuários.

---

## 🔧 Requisitos

- **Compilador C** (GCC ou compatível)
- **Terminal/Shell** para execução do programa
- **Sistema operacional**: Windows, Linux ou macOS

---

## 📂 Estrutura do Código

O código está dividido nas seguintes funções:

- `registro()` → Cadastra usuários e armazena os dados em arquivos.
- `consulta()` → Busca registros a partir do CPF informado.
- `deletar()` → Remove registros do sistema.
- `main()` → Interface principal do sistema e controle de fluxo.

---

## 💻 Desenvolvedor

- **[Ellen Cigoli](https://github.com/ellencigoli)**

Caso tenha dúvidas ou sugestões, entre em contato! 💬

---

## 📝 Licença

Este projeto está licenciado sob a licença **MIT**. Consulte o arquivo [LICENSE](LICENSE) para mais detalhes.
