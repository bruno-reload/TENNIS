<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="PlayerForm.aspx.cs" Inherits="TENNIS.VIEW.forms.PlayerForm" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
        <div>
            <asp:Label ID="Label1" runat="server" Text="name"></asp:Label>
            <asp:TextBox ID="name" runat="server"></asp:TextBox>
        </div>
        <div>
            <asp:Label ID="Label2" runat="server" Text="nickname"></asp:Label>
            <asp:TextBox ID="nickname" runat="server"></asp:TextBox>
        </div>
        <div>
            <asp:Label ID="Label3" runat="server" Text="password"></asp:Label>
            <asp:TextBox ID="password" runat="server"></asp:TextBox>
        </div>
        <div>
            <asp:Button ID="Button1" runat="server" Text="inserir" OnClick="Button1_Click" />
            <asp:Button ID="Button2" runat="server" Text="alterar" OnClick="Button2_Click" />
            <asp:Button ID="Button3" runat="server" Text="excluir" OnClick="Button3_Click" />
            <asp:Button ID="Button4" runat="server" OnClick="Button4_Click" Text="listar" />
            <asp:Button ID="Button5" runat="server" OnClick="Button5_Click" Text="return" />
        </div>
        <asp:GridView ID="grid" runat="server" AutoGenerateColumns="False" CellPadding="4" ForeColor="#333333" GridLines="None">
            <AlternatingRowStyle BackColor="White" />
            <Columns>
                <asp:BoundField DataField="Nickname" HeaderText="Nickname" />
                <asp:BoundField DataField="Name" HeaderText="Name" />
                <asp:BoundField DataField="Password" HeaderText="Password" />
            </Columns>
            <EditRowStyle BackColor="#2461BF" />
            <FooterStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
            <HeaderStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
            <PagerStyle BackColor="#2461BF" ForeColor="White" HorizontalAlign="Center" />
            <RowStyle BackColor="#EFF3FB" />
            <SelectedRowStyle BackColor="#D1DDF1" Font-Bold="True" ForeColor="#333333" />
            <SortedAscendingCellStyle BackColor="#F5F7FB" />
            <SortedAscendingHeaderStyle BackColor="#6D95E1" />
            <SortedDescendingCellStyle BackColor="#E9EBEF" />
            <SortedDescendingHeaderStyle BackColor="#4870BE" />
        </asp:GridView>
    </form>
</body>
</html>
