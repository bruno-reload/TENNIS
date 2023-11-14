<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="MatchForm.aspx.cs" Inherits="TENNIS.VIEW.forms.MatchForm" %>

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
            <asp:Label ID="Label2" runat="server" Text="start"></asp:Label>
            <asp:TextBox ID="start" runat="server" Width="200px" TextMode="DateTime"></asp:TextBox>
        </p>
        <asp:Label ID="Label3" runat="server" Text="end"></asp:Label>
        <asp:TextBox ID="end" runat="server" Width="200px" TextMode="DateTime"></asp:TextBox>
        <p>
            <asp:Label ID="Label4" runat="server" Text="Name"></asp:Label>
            <asp:TextBox ID="name" runat="server"></asp:TextBox>
        </p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="inserir" />
        <asp:Button ID="Button2" runat="server" Text="alterar" OnClick="Button2_Click" />
        <asp:Button ID="Button3" runat="server" Text="excluir" OnClick="Button3_Click" />
        <asp:Button ID="Button4" runat="server" Text="listar" OnClick="Button4_Click" />
        <asp:GridView ID="grid" runat="server" AutoGenerateColumns="False">
            <Columns>
                <asp:BoundField DataField="ID" HeaderText="ID" />
                <asp:BoundField DataField="Start" HeaderText="start" />
                <asp:BoundField DataField="End" HeaderText="End" />
                <asp:BoundField DataField="Name" HeaderText="Name" />
            </Columns>
        </asp:GridView>
    </form>
</body>
</html>
