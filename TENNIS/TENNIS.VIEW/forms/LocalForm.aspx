<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="LocalForm.aspx.cs" Inherits="TENNIS.VIEW.forms.LocalForm" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
        <asp:Label ID="Label1" runat="server" Text="ID"></asp:Label>
        <asp:TextBox ID="id" runat="server"></asp:TextBox>
        <p>
            <asp:Label ID="Label5" runat="server" Text="Neigborhood"></asp:Label>
            <asp:TextBox ID="nei" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label4" runat="server" Text="City"></asp:Label>
            <asp:TextBox ID="city" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label3" runat="server" Text="Zipe Code"></asp:Label>
            <asp:TextBox ID="zipe" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label2" runat="server" Text="Street"></asp:Label>
            <asp:TextBox ID="street" runat="server"></asp:TextBox>
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
