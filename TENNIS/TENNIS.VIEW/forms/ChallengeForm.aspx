<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="ChallengeForm.aspx.cs" Inherits="TENNIS.VIEW.forms.ChallengeForm" %>

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
            <asp:Label ID="Label2" runat="server" Text="marked"></asp:Label>
            <asp:TextBox ID="marked" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label3" runat="server" Text="phase"></asp:Label>
            <asp:TextBox ID="phase" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label4" runat="server" Text="finished"></asp:Label>
            <asp:TextBox ID="finishd" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label5" runat="server" Text="duration"></asp:Label>
            <asp:TextBox ID="duration" runat="server"></asp:TextBox>
        </p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="inserir" />
        <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" Text="alterar" />
        <asp:Button ID="Button3" runat="server" OnClick="Button3_Click" Text="excluir" />
        <asp:Button ID="Button4" runat="server" OnClick="Button4_Click" Text="listar" />
        <asp:Button ID="Button5" runat="server" OnClick="Button5_Click" Text="return" />
        <asp:GridView ID="grid" runat="server">
        </asp:GridView>
    </form>
</body>
</html>
