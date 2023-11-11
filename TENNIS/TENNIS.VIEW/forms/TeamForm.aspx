<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="TeamForm.aspx.cs" Inherits="TENNIS.VIEW.forms.TeamForm" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body style="height: 235px">
    <form id="form1" runat="server">
    <div>
    
        <asp:Label ID="Label1" runat="server" Text="ID"></asp:Label>
        <asp:TextBox ID="id" runat="server"></asp:TextBox>
    
    </div>
        <p>
            <asp:Label ID="Label3" runat="server" Text="Nome"></asp:Label>
            <asp:TextBox ID="name" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="inserir" />
            <asp:Button ID="Button4" runat="server" OnClick="Button4_Click" Text="altera" />
            <asp:Button ID="Button3" runat="server" Enabled="False" OnClick="Button3_Click" Text="excluir" />
            <asp:Button ID="Button5" runat="server" OnClick="Button5_Click" Text="lista" />
            <asp:Button ID="Button6" runat="server" OnClick="Button6_Click" Text="return" />
        </p>
        <asp:GridView ID="grid" runat="server" AutoGenerateColumns="False">
            <Columns>
                <asp:BoundField DataField="Id" HeaderText="ID" />
                <asp:BoundField DataField="Name" HeaderText="Name" />
            </Columns>
        </asp:GridView>
    </form>
</body>
</html>
