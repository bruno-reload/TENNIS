<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="index.aspx.cs" Inherits="TENNIS.VIEW.index" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        Player<p>
            Nickname<asp:TextBox ID="nickname" runat="server"></asp:TextBox>
        </p>
        password<asp:TextBox ID="password" runat="server"></asp:TextBox>
        <p>
            Name<asp:TextBox ID="name" runat="server"></asp:TextBox>
        </p>
        <asp:Button ID="novo" runat="server" OnClick="novo_Click" Text="novo" />
        <asp:Button ID="cadastrar" runat="server" Text="cadastrar" OnClick="cadastrar_Click" />
        <asp:Button ID="alterar" runat="server" Text="alterar" />
        <asp:Button ID="excluir" runat="server" Text="excluir" OnClick="excluir_Click" />
    </form>
</body>
</html>
