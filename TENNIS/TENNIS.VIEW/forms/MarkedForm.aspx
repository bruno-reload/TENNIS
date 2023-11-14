<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="MarkedForm.aspx.cs" Inherits="TENNIS.VIEW.forms.MarkedForm" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
        <asp:Label ID="Label1" runat="server" Text="Id"></asp:Label>
        <asp:TextBox ID="id" runat="server"></asp:TextBox>
        <p>
            <asp:Label ID="Label4" runat="server" Text="Data"></asp:Label>
            <asp:TextBox ID="data" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label3" runat="server" Text="Hora"></asp:Label>
            <asp:TextBox ID="hora" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label2" runat="server" Text="Local"></asp:Label>
            <asp:TextBox ID="local" runat="server"></asp:TextBox>
        </p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="inserir" />
        <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" Text="alterar" />
        <asp:Button ID="Button3" runat="server" OnClick="Button3_Click" Text="excluir" />
        <asp:Button ID="Button4" runat="server" OnClick="Button4_Click" Text="listar" />
        <asp:GridView ID="grid" runat="server">
        </asp:GridView>
    </form>
</body>
</html>
