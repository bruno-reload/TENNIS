<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="FindForm.aspx.cs" Inherits="TENNIS.VIEW.forms.FindForm" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
    </div>
        <asp:Label ID="Label1" runat="server" Text="id"></asp:Label>
        <asp:TextBox ID="id" runat="server"></asp:TextBox>
        <p>
            <asp:Label ID="Label5" runat="server" Text="points"></asp:Label>
            <asp:TextBox ID="points" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label4" runat="server" Text="team"></asp:Label>
            <asp:TextBox ID="team" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label3" runat="server" Text="challenge"></asp:Label>
            <asp:TextBox ID="challenge" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label2" runat="server" Text="winner"></asp:Label>
            <asp:TextBox ID="winner" runat="server"></asp:TextBox>
        </p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="inserir" />
        <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" Text="atualizar" />
        <asp:Button ID="Button3" runat="server" OnClick="Button3_Click" Text="excluir" />
        <asp:Button ID="Button4" runat="server" OnClick="Button4_Click" Text="listar" />
        <asp:GridView ID="grid" runat="server">
        </asp:GridView>
    </form>
</body>
</html>
