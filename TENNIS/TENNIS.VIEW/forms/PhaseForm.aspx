<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="PhaseForm.aspx.cs" Inherits="TENNIS.VIEW.forms.PhaseForm" %>

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
            <asp:Label ID="Label4" runat="server" Text="nome"></asp:Label>
            <asp:TextBox ID="name" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label3" runat="server" Text="match"></asp:Label>
            <asp:TextBox ID="match" runat="server"></asp:TextBox>
        </p>
        <p>
            <asp:Label ID="Label2" runat="server" Text="minimo de pontos"></asp:Label>
            <asp:TextBox ID="min_points" runat="server"></asp:TextBox>
        </p>
        <asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="inserir" />
        <asp:Button ID="Button2" runat="server" OnClick="Button2_Click" style="height: 26px" Text="editar" />
        <asp:Button ID="Button3" runat="server" OnClick="Button3_Click" style="height: 26px" Text="excluir" />
        <asp:Button ID="Button4" runat="server" Text="listar" OnClick="Button4_Click1" />
        <asp:GridView ID="grid" runat="server" AutoGenerateColumns="False">
            <Columns>
                <asp:BoundField DataField="Id" HeaderText="Id" />
                <asp:BoundField DataField="Name" HeaderText="Name" />
                <asp:BoundField DataField="MinPoints" HeaderText="MinPoints" />
                <asp:BoundField DataField="Match" HeaderText="Match" />
            </Columns>
        </asp:GridView>
    </form>
</body>
</html>
